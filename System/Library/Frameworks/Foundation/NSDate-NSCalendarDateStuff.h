//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (NSCalendarDateStuff)
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;	// IMP=0x0050000000462e6d
+ (id)dateWithNaturalLanguageString:(id)arg1;	// IMP=0x0050000000462e56
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;	// IMP=0x0050000000462ddf
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x00500000004804d2
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;	// IMP=0x0010000000460b99
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;	// IMP=0x0010000000460b34
- (Class)classForCoder;	// IMP=0x00100000004804c1
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000004803df
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000048031b
- (_Bool)_web_isToday;	// IMP=0x0010000000487116
- (long long)_web_compareDay:(id)arg1;	// IMP=0x0010000000486ff3
- (id)_web_RFC1123DateString;	// IMP=0x0010000000486e61
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x001000000060bc92
@end

