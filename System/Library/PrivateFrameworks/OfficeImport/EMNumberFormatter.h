//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EMNumberFormatter : NSObject
{
    struct __CFNumberFormatter *_genericFormatter;	// 8 = 0x8
    struct __CFNumberFormatter *_doubleFormatter;	// 16 = 0x10
    struct __CFNumberFormatter *_percentFormatter;	// 24 = 0x18
    struct __CFNumberFormatter *_bigNumberFormatter;	// 32 = 0x20
    struct __CFNumberFormatter *_currencyFormatter;	// 40 = 0x28
    struct __CFDateFormatter *_dateFormatter;	// 48 = 0x30
    NSString *_excelFormatString;	// 56 = 0x38
    NSString *_baseICUFormatString;	// 64 = 0x40
    _Bool _isNegativeRed;	// 72 = 0x48
    _Bool _hasLocales;	// 73 = 0x49
    int _formatType;	// 76 = 0x4c
}

+ (id)formatterForFormat:(id)arg1;	// IMP=0x0060000000134fe0
- (void).cxx_destruct;	// IMP=0x00000000004711a4
- (id)formatValue:(double)arg1 inWorkbook:(id)arg2;	// IMP=0x0000000000470fe4
- (void)_parseExcelFormatString:(id)arg1;	// IMP=0x0000000000470bab
- (id)convertedGenericNumberFormatWithFormat:(id)arg1;	// IMP=0x0000000000470b26
- (void)convertGenericNumberFormat:(id)arg1;	// IMP=0x00000000004707d5
- (id)formatDate:(id)arg1;	// IMP=0x000000000013f4fb
- (id)formatCurrency:(double)arg1;	// IMP=0x000000000013530a
- (id)formatDefault:(double)arg1;	// IMP=0x00000000001356ef
- (id)formatDefault:(double)arg1 showingNumberOfDigits:(unsigned long long)arg2;	// IMP=0x00000000004706d8
- (_Bool)useBigNumberFormatterForValue:(double)arg1;	// IMP=0x000000000047064d
- (unsigned long long)optimalNumberOfDigitsForValue:(double)arg1;	// IMP=0x0000000000470623
- (id)formatPercent:(double)arg1;	// IMP=0x00000000001354ba
- (id)formatDoubleValue:(double)arg1;	// IMP=0x00000000001464c1
- (id)_icuFormatStringForCurrencyFormat;	// IMP=0x00000000004704f3
- (id)formatFraction:(double)arg1;	// IMP=0x0000000000231be1
- (id)formatPhoneNumber:(double)arg1;	// IMP=0x000000000024a274
- (id)_icuFormatStringForDateFormat;	// IMP=0x000000000046fbce
- (_Bool)isNegativeRed;	// IMP=0x0000000000135239
- (int)formatType;	// IMP=0x0000000000135230
- (struct __CFNumberFormatter *)_currencyFormatter;	// IMP=0x00000000001353ab
- (struct __CFDateFormatter *)_dateFormatter;	// IMP=0x000000000013f5af
- (struct __CFNumberFormatter *)_percentFormatter;	// IMP=0x000000000046fad7
- (struct __CFNumberFormatter *)_doubleFormatter;	// IMP=0x000000000046f9e3
- (struct __CFNumberFormatter *)_bigNumberFormatter;	// IMP=0x00000000001e165c
- (struct __CFNumberFormatter *)_genericFormatterForNumberOfSignificantDigits:(unsigned long long)arg1;	// IMP=0x000000000046f69b
- (void)dealloc;	// IMP=0x0000000000136ccd
- (id)initForGeneralFormatting;	// IMP=0x000000000046f640
- (id)initWithExcelFormatString:(id)arg1;	// IMP=0x0000000000135170

@end
