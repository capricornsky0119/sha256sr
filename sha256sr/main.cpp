#include <chrono>
#include <iostream>
#include <string>
#include <cmath>

#include "secure_random.h"

int main() {
  std::vector<uint8_t> seed = {104, 101, 108, 108, 111, 32, 119, 111, 114, 108, 100};
  SecureRandom sr(seed);
  std::vector<double> result;
  result.resize(10000000);
  auto start = std::chrono::high_resolution_clock::now();
//   sr.engine_next_bytes(result);
  for (int i = 0; i < result.size(); i++) {
    sr.nextGaussian();
    // sqrt(100000.124/20.24);
    // sr.computeHash();
  }
  auto end = std::chrono::high_resolution_clock::now();
  auto elapsed =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "Elapsed time: " << elapsed.count() << " milliseconds"
            << std::endl;
    std::cout<<"sr.float_count = "<<sr.float_count<<std::endl;
//   for (int i = 0; i < result.size(); i++) {
//     std::cout << std::to_string(result[i]) << ",";
//   }
//   std::cout << std::endl;
//   sr.engine_next_bytes(result);
//   for (int i = 0; i < result.size(); i++) {
//     std::cout << std::to_string(result[i]) << ",";
//   }
//   std::cout << std::endl;
//   sr.engine_next_bytes(result);
//   for (int i = 0; i < result.size(); i++) {
//     std::cout << std::to_string(result[i]) << ",";
//   }
//   std::cout << std::endl;
//   sr.engine_next_bytes(result);
//   for (int i = 0; i < result.size(); i++) {
//     std::cout << std::to_string(result[i]) << ",";
//   }
  return 0;
}