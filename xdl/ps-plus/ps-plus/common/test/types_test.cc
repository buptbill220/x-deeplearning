/* Copyright (C) 2016-2018 Alibaba Group Holding Limited

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "gtest/gtest.h"
#include "ps-plus/common/types.h"

using ps::DataTypeToEnum;
using ps::EnumToDataType;
using ps::DataType;

TEST(DataTest, DataTypeToEnum) {
  EXPECT_EQ(DataType::kInt8, DataTypeToEnum<int8_t>::v());
  EXPECT_EQ(DataType::kInt16, DataTypeToEnum<int16_t>::v());
  EXPECT_EQ(DataType::kInt32, DataTypeToEnum<int32_t>::v());
  EXPECT_EQ(DataType::kInt64, DataTypeToEnum<int64_t>::v());
  EXPECT_EQ(DataType::kFloat, DataTypeToEnum<float>::v());
  EXPECT_EQ(DataType::kDouble, DataTypeToEnum<double>::v());
}

TEST(DataTest, EnumToDataType) {
  EXPECT_EQ(typeid(int8_t).hash_code(), typeid(EnumToDataType<DataType::kInt8>::Type).hash_code());
  EXPECT_EQ(typeid(int16_t).hash_code(), typeid(EnumToDataType<DataType::kInt16>::Type).hash_code());
  EXPECT_EQ(typeid(int32_t).hash_code(), typeid(EnumToDataType<DataType::kInt32>::Type).hash_code());
  EXPECT_EQ(typeid(int64_t).hash_code(), typeid(EnumToDataType<DataType::kInt64>::Type).hash_code());
  EXPECT_EQ(typeid(float).hash_code(), typeid(EnumToDataType<DataType::kFloat>::Type).hash_code());
  EXPECT_EQ(typeid(double).hash_code(), typeid(EnumToDataType<DataType::kDouble>::Type).hash_code());
}

TEST(DataTest, CASES) {
  std::size_t s;

  CASES(DataType::kInt8, s = typeid(T).hash_code());
  EXPECT_EQ(typeid(int8_t).hash_code(), s);

  CASES(DataType::kInt16, s = typeid(T).hash_code());
  EXPECT_EQ(typeid(int16_t).hash_code(), s);

  CASES(DataType::kInt32, s = typeid(T).hash_code());
  EXPECT_EQ(typeid(int32_t).hash_code(), s);

  CASES(DataType::kInt64, s = typeid(T).hash_code());
  EXPECT_EQ(typeid(int64_t).hash_code(), s);

  CASES(DataType::kFloat, s = typeid(T).hash_code());
  EXPECT_EQ(typeid(float).hash_code(), s);

  CASES(DataType::kDouble, s = typeid(T).hash_code());
  EXPECT_EQ(typeid(double).hash_code(), s);
}

