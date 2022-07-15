//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TSUDateFormatStringUtilities)
+ (id)numberSymbols;	// IMP=0x00200000000157e0
+ (id)tsu_stringWithXMLString:(const char *)arg1;	// IMP=0x002000000001e5c4
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(_Bool)arg3;	// IMP=0x002000000001e306
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x002000000001e2ea
+ (id)tsu_listSeparator;	// IMP=0x002000000001c9a9
+ (id)tsu_stringByIndentingString:(id)arg1;	// IMP=0x002000000001c197
+ (id)tsu_stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;	// IMP=0x002000000001c094
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x002000000001c059
+ (id)tsu_stringWithUUID;	// IMP=0x002000000001c01f
+ (id)stringWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;	// IMP=0x0020000000021b59
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2 includeDecimalSeparator:(_Bool)arg3;	// IMP=0x002000000003e616
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;	// IMP=0x002000000003e599
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;	// IMP=0x002000000003e507
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;	// IMP=0x002000000003e367
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(_Bool)arg2 digitString:(id)arg3;	// IMP=0x002000000003e2ca
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned int)arg1 separator:(_Bool)arg2 digitString:(id)arg3;	// IMP=0x002000000003e1d6
+ (id)customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;	// IMP=0x002000000003ddd7
- (id)stringByReplacing2DigitYearStringWith4DigitYearString;	// IMP=0x0010000000007ed1
- (id)stringByReplacing4DigitYearStringWith2DigitYearString;	// IMP=0x0010000000007e63
- (id)prefixOfNumberFormatSubpattern;	// IMP=0x00100000000161eb
- (unsigned long long)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// IMP=0x00100000000160b8
- (id)suffixOfNumberFormatSubpattern;	// IMP=0x0010000000016086
- (unsigned long long)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// IMP=0x0010000000015f6b
- (id)numberPortionOfNumberFormatSubpattern;	// IMP=0x0010000000015f1a
- (id)negativeSubpatternOfNumberFormatPattern;	// IMP=0x0010000000015ecb
- (id)positiveSubpatternOfNumberFormatPattern;	// IMP=0x0010000000015e83
- (unsigned long long)indexOfNumberFormatSubpatternSeparator;	// IMP=0x0010000000015cfe
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// IMP=0x0010000000015bd3
- (id)newRangesOfEscapedCharactersInNumberFormatPattern;	// IMP=0x0010000000015a96
- (_Bool)isNumberFormatPattern;	// IMP=0x0010000000015a2f
- (id)newStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// IMP=0x0010000000015869
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;	// IMP=0x001000000001e7f7
- (_Bool)tsu_containsOnlyCharactersFromSet:(id)arg1;	// IMP=0x001000000001e7b4
- (id)tsu_unescapeXML;	// IMP=0x001000000001e6cb
- (id)tsu_escapeXML;	// IMP=0x001000000001e5e2
- (id)tsu_stringByMakingFirstCharacterUppercase;	// IMP=0x001000000001e549
- (id)tsu_encodeStringBase64;	// IMP=0x001000000001e4fd
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(_Bool)arg2;	// IMP=0x001000000001e156
- (id)tsu_stringWithPathRelativeTo:(id)arg1;	// IMP=0x001000000001dfe0
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;	// IMP=0x001000000001df02
- (id)tsu_substringWithComposedCharacterSequencesToIndex:(unsigned long long)arg1;	// IMP=0x001000000001de7e
- (id)tsu_stringWithRealpath;	// IMP=0x001000000001de25
- (_Bool)tsu_isChildOfPath:(id)arg1;	// IMP=0x001000000001dc2e
- (_Bool)tsu_isDescendantOfPath:(id)arg1;	// IMP=0x001000000001db0a
- (id)tsu_escapeForIcuRegex;	// IMP=0x001000000001d841
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x001000000001d6ac
- (id)tsu_stringByReplacingCharactersInSet:(id)arg1 withCharacter:(unsigned short)arg2;	// IMP=0x001000000001d548
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x001000000001d534
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;	// IMP=0x001000000001d370
- (id)tsu_md5Hash;	// IMP=0x001000000001d1d8
- (id)tsu_stringByFixingBrokenSurrogatePairs;	// IMP=0x001000000001cee2
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;	// IMP=0x001000000001ccdd
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;	// IMP=0x001000000001ccc4
- (id)tsu_stringByAddingCSVEscapes;	// IMP=0x001000000001cb4b
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;	// IMP=0x001000000001ca46
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;	// IMP=0x001000000001c8e5
- (id)tsu_stringByExpandingTableFormatting;	// IMP=0x001000000001c1ae
- (_Bool)tsu_isPathCreatedByAppendingPathComponent:(id)arg1 insideBasePath:(id)arg2;	// IMP=0x001000000001ecec
- (id)tsu_pathToRelativeComponentPath:(id)arg1;	// IMP=0x001000000001eb48
- (_Bool)tsu_containsSubstring:(id)arg1;	// IMP=0x001000000001eb25
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ea0c
- (struct _NSRange)tsu_range;	// IMP=0x001000000001e9f4
- (struct _NSRange)tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;	// IMP=0x001000000001e91e
- (unsigned long long)tsu_numberOfKeysInKeyPath;	// IMP=0x001000000001f0ab
- (id)tsu_lastKey;	// IMP=0x001000000001f054
- (id)tsu_firstKey;	// IMP=0x001000000001f000
- (id)tsu_keyPathByAppendingKey:(id)arg1;	// IMP=0x001000000001ef70
- (id)tsu_keyPathByPrependingKey:(id)arg1;	// IMP=0x001000000001eee0
- (id)tsu_keyPathByRemovingFirstKey;	// IMP=0x001000000001ee85
- (id)tsu_keyPathByRemovingLastKey;	// IMP=0x001000000001ee2d
- (_Bool)bindToSqlStatement:(struct sqlite3_stmt *)arg1 index:(int)arg2 error:(id *)arg3;	// IMP=0x0010000000021a96
- (id)initWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;	// IMP=0x0010000000021a6a
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;	// IMP=0x001000000003e7b7
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;	// IMP=0x001000000003e7a0
- (id)formatStringFromCustomNumberFormatScaleToken;	// IMP=0x001000000003e789
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;	// IMP=0x001000000003e759
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;	// IMP=0x001000000003e708
- (id)digitPlaceholderStringInDigitToken;	// IMP=0x001000000003e698
- (unsigned long long)numberOfDigitsInCustomNumberFormatDecimalToken;	// IMP=0x001000000003e3c8
- (id)stringByInsertingFormatGroupingSeparators;	// IMP=0x001000000003e0d0
- (_Bool)customFormatIntegerTokenUsesSeparator;	// IMP=0x001000000003dfff
- (unsigned int)numberOfDigitsInCustomNumberFormatIntegerToken;	// IMP=0x001000000003deed
- (_Bool)isSpecialCustomNumberFormatTokenOfType:(int)arg1;	// IMP=0x001000000003de79
- (_Bool)isSpecialCustomNumberFormatToken;	// IMP=0x001000000003de36
- (_Bool)containsPercentEscapes;	// IMP=0x0010000000051123
- (void)appendJsonStringToString:(id)arg1;	// IMP=0x00100000000523f5
- (_Bool)tsu_pathExtensionConformsToUTI:(id)arg1;	// IMP=0x0010000000053738
- (_Bool)tsu_pathConformsToUTI:(id)arg1;	// IMP=0x0010000000053707
@property(readonly, nonatomic) NSString *tsu_pathUTI;
@property(readonly, nonatomic) NSString *tsu_UTIFilenameExtension;
- (_Bool)tsu_conformsToAnyUTI:(id)arg1;	// IMP=0x001000000005335c
- (_Bool)tsu_conformsToUTI:(id)arg1;	// IMP=0x0010000000053349
- (struct CGSize)tsu_boundingSizeWithFont:(id)arg1;	// IMP=0x00100000000548db
@end
