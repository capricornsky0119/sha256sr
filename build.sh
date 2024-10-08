rm -rf build
rm -rf dist
pip uninstall -y sha256sr

mkdir -p build/sha256sr
cp -r sha256sr build/
cp setup.py build/
cp __init__.py build/
cp requirements.txt build/
cp README.md build/

cd build
python setup.py sdist bdist_wheel --universal
cd -

cp -r build/dist .
pip install dist/sha256sr*.whl