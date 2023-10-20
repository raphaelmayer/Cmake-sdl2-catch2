#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include <lib.hpp>

TEST_CASE("Quick check", "[main]")
{
	auto sum = add(1, 2);

	REQUIRE(sum == 3);
}
