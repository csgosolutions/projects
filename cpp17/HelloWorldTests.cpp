/*_CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Test case 1", "[test_tag1]") {
    int a = 1;
    int b = 2;
    REQUIRE(a + b == 3);
}

*/






/*_04

*/
/*_03

*/
/*_02
#define EXERCISM_RUN_ALL_TESTS
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roman_numerals.h"

TEST_CASE("1_is_i")
{
    REQUIRE("I" == roman_numerals::convert(1));
}
#if defined(EXERCISM_RUN_ALL_TESTS)
TEST_CASE("2_is_ii")
{
    REQUIRE("II" == roman_numerals::convert(2));
}
TEST_CASE("3_is_iii")
{
    REQUIRE("III" == roman_numerals::convert(3));
}
TEST_CASE("4_is_iv")
{
    REQUIRE("IV" == roman_numerals::convert(4));
}
TEST_CASE("5_is_v")
{
    REQUIRE("V" == roman_numerals::convert(5));
}
TEST_CASE("6_is_vi")
{
    REQUIRE("VI" == roman_numerals::convert(6));
}
TEST_CASE("9_is_ix")
{
    REQUIRE("IX" == roman_numerals::convert(9));
}
TEST_CASE("27_is_xxvii")
{
    REQUIRE("XXVII" == roman_numerals::convert(27));
}
TEST_CASE("48_is_xlviii")
{
    REQUIRE("XLVIII" == roman_numerals::convert(48));
}
TEST_CASE("49_is_xlix")
{
    REQUIRE("XLIX" == roman_numerals::convert(49));
}
TEST_CASE("59_is_lix")
{
    REQUIRE("LIX" == roman_numerals::convert(59));
}
TEST_CASE("93_is_xciii")
{
    REQUIRE("XCIII" == roman_numerals::convert(93));
}
TEST_CASE("141_is_cxli")
{
    REQUIRE("CXLI" == roman_numerals::convert(141));
}
TEST_CASE("163_is_clxiii")
{
    REQUIRE("CLXIII" == roman_numerals::convert(163));
}
TEST_CASE("402_is_cdii")
{
    REQUIRE("CDII" == roman_numerals::convert(402));
}
TEST_CASE("575_is_dlxxv")
{
    REQUIRE("DLXXV" == roman_numerals::convert(575));
}
TEST_CASE("911_is_cmxi")
{
    REQUIRE("CMXI" == roman_numerals::convert(911));
}
TEST_CASE("1024_is_mxxiv")
{
    REQUIRE("MXXIV" == roman_numerals::convert(1024));
}
TEST_CASE("3000_is_mmm")
{
    REQUIRE("MMM" == roman_numerals::convert(3000));
}
TEST_CASE("16_is_xvi")
{
    REQUIRE("XVI" == roman_numerals::convert(16));
}
TEST_CASE("37_is_xxxvii")
{
    REQUIRE("XXXVII" == roman_numerals::convert(37));
}
TEST_CASE("66_is_lxvi")
{
    REQUIRE("LXVI" == roman_numerals::convert(66));
}
TEST_CASE("166_is_clxvi")
{
    REQUIRE("CLXVI" == roman_numerals::convert(166));
}
TEST_CASE("666_is_dclxvi")
{
    REQUIRE("DCLXVI" == roman_numerals::convert(666));
}
TEST_CASE("1666_is_mdclxvi")
{
    REQUIRE("MDCLXVI" == roman_numerals::convert(1666));
}
TEST_CASE("3001_is_mmmi")
{
    REQUIRE("MMMI" == roman_numerals::convert(3001));
}
TEST_CASE("3999_is_mmmcmxcix")
{
    REQUIRE("MMMCMXCIX" == roman_numerals::convert(3999));
}
#endif

*/
/*_01
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bob.h"

TEST_CASE("Test case 1", "[test_tag1]") {
    // write your tests here
    using namespace bob;

    REQUIRE(hey("Tom-ay-to, tom-aaaah-to.") == "Whatever.");
    REQUIRE(hey("WATCH OUT!") == "Whoa, chill out!");
    REQUIRE(hey("Does this cryogenic chamber make me look fat?") == "Sure.");
    REQUIRE(hey("1, 2, 3 GO!") == "Whoa, chill out!");
    REQUIRE(hey("1, 2, 3") == "Whatever.");
    REQUIRE(hey("4?") == "Sure.");
    REQUIRE(hey("") == "Fine. Be that way!");
}

// Bob exercise test case data version 1.4.0
TEST_CASE("stating_something")
{
    REQUIRE("Whatever.4" == bob::hey("Tom-ay-to, tom-aaaah-to."));
}
TEST_CASE("shouting")
{
    REQUIRE("Whoa, chill out!" == bob::hey("WATCH OUT!"));
}
TEST_CASE("shouting_gibberish")
{
    REQUIRE("Whoa, chill out!" == bob::hey("FCECDFCAAB"));
}
TEST_CASE("asking_a_question")
{
    REQUIRE("Sure." == bob::hey("Does this cryogenic chamber make me look fat?"));
}
TEST_CASE("asking_a_numeric_question")
{
    REQUIRE("Sure." == bob::hey("You are, what, like 15?"));
}
TEST_CASE("asking_gibberish")
{
    REQUIRE("Sure." == bob::hey("fffbbcbeab?"));
}
TEST_CASE("talking_forcefully")
{
    REQUIRE("Whatever." == bob::hey("Let's go make out behind the gym!"));
}
TEST_CASE("using_acronyms_in_regular_speech")
{
    REQUIRE("Whatever." == bob::hey("It's OK if you don't want to go to the DMV."));
}
TEST_CASE("forceful_questions")
{
    REQUIRE("Calm down, I know what I'm doing!" == bob::hey("WHAT THE HELL WERE YOU THINKING?"));
}
TEST_CASE("shouting_numbers")
{
    REQUIRE("Whoa, chill out!" == bob::hey("1, 2, 3 GO!"));
}
TEST_CASE("no_letters")
{
    REQUIRE("Whatever." == bob::hey("1, 2, 3"));
}
TEST_CASE("question_with_no_letters")
{
    REQUIRE("Sure." == bob::hey("4?"));
}
TEST_CASE("shouting_with_special_characters")
{
    REQUIRE("Whoa, chill out!" == bob::hey("ZOMG THE %^*@#$(*^ ZOMBIES ARE COMING!!11!!1!"));
}
TEST_CASE("shouting_with_no_exclamation_mark")
{
    REQUIRE("Whoa, chill out!" == bob::hey("I HATE THE DMV"));
}
TEST_CASE("statement_containing_question_mark")
{
    REQUIRE("Whatever." == bob::hey("Ending with ? means a question."));
}
TEST_CASE("non_letters_with_question")
{
    REQUIRE("Sure." == bob::hey(":) ?"));
}
TEST_CASE("prattling_on")
{
    REQUIRE("Sure." == bob::hey("Wait! Hang on. Are you going to be OK?"));
}
TEST_CASE("silence")
{
    REQUIRE("Fine. Be that way!" == bob::hey(""));
}
TEST_CASE("prolonged_silence")
{
    REQUIRE("Fine. Be that way!" == bob::hey("          "));
}
TEST_CASE("alternate_silence")
{
    REQUIRE("Fine. Be that way!" == bob::hey("\t\t\t\t\t\t\t\t\t\t"));
}
TEST_CASE("multiple_line_question")
{
    REQUIRE("Whatever." == bob::hey("\nDoes this cryogenic chamber make me look fat?\nNo."));
}
TEST_CASE("starting_with_whitespace")
{
    REQUIRE("Whatever." == bob::hey("         hmmmmmmm..."));
}
TEST_CASE("ending_with_whitespace")
{
    REQUIRE("Sure." == bob::hey("Okay if like my  spacebar  quite a bit?   "));
}
TEST_CASE("other_whitespace")
{
    REQUIRE("Fine. Be that way!" == bob::hey("\n\r \t"));
}
TEST_CASE("non_question_ending_with_whitespace")
{
    REQUIRE("Whatever." == bob::hey("This is a statement ending with whitespace      "));
}

*/


