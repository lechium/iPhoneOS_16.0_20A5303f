//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BKIntegerEventStatistic
{
    long long _value;	// 8 = 0x8
}

@property(nonatomic) long long value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005cb5a
- (void)increment;	// IMP=0x001000000005cb38
- (void)reset;	// IMP=0x001000000005cace
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000005ca20
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005c9a8
- (unsigned long long)hash;	// IMP=0x001000000005c94f

@end

