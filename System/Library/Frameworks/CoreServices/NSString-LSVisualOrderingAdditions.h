//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (LSVisualOrderingAdditions)
+ (id)NSStringFromLSInstallType:(unsigned long long)arg1;	// IMP=0x00600000000e15e0
+ (id)NSStringFromLSInstallState:(unsigned long long)arg1;	// IMP=0x00600000000e1598
+ (id)NSStringFromLSInstallPhase:(unsigned long long)arg1;	// IMP=0x00600000000e1550
- (id)ls_visuallyOrderCharactersReturningError:(id *)arg1;	// IMP=0x00100000000b2424
- (_Bool)ls_matchesForPluginQuery:(id)arg1;	// IMP=0x0010000000103d6e
- (_Bool)ls_matchesStringForPluginQuery:(id)arg1;	// IMP=0x00100000001039a8
- (id)ls_cleanForPluginQuery;	// IMP=0x00100000001038d8
@end

