//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface TransitMutablePreferences
{
}

- (void)setMode:(long long)arg1 disabled:(_Bool)arg2;	// IMP=0x0020000000addf01
- (void)toggleModeEnabled:(long long)arg1;	// IMP=0x0010000000addea7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000adde2e

// Remaining properties
@property(nonatomic) long long disabledModes; // @dynamic disabledModes;
@property(nonatomic) _Bool showICFares; // @dynamic showICFares;
@property(nonatomic) int sortOption; // @dynamic sortOption;
@property(retain, nonatomic) NSNumber *surchargeOption; // @dynamic surchargeOption;

@end

