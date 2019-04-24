// Copyright (c) 2011 The LevelDB Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.



#include <set>

#include "port.h"
#include "random.h"
#include "testharness.h"

namespace leveldb {

	typedef uint64_t Key;

	class ToTest {
	public:
		bool a = true;
		int b = 1;
		int c = 1;
	};


	TEST(ToTest, Empty) {

		ToTest totest;
		ASSERT_TRUE(totest.a);

	}

	TEST(ToTest, InsertAndLookup) {
		ToTest totest;
		ASSERT_EQ(totest.b, 1);


	}

}
int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}
