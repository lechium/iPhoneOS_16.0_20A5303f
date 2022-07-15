//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ABSContactsResetSource
{
    double _countSoFar;	// 8 = 0x8
    double _countRecip;	// 16 = 0x10
}

@property(nonatomic) double countRecip; // @synthesize countRecip=_countRecip;
@property(nonatomic) double countSoFar; // @synthesize countSoFar=_countSoFar;
- (_Bool)isReset;	// IMP=0x0010000000009060
- (double)progress;	// IMP=0x0010000000009021
- (void)enumerateContactsAdd:(CDUnknownBlockType)arg1 remove:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008847
- (id)initWithKeys:(id)arg1 store:(id)arg2;	// IMP=0x00100000000087a9

@end
