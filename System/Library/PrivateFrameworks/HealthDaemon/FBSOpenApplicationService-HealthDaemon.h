//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSOpenApplicationService.h>

@interface FBSOpenApplicationService (HealthDaemon)
+ (_Bool)hd_canOpenApplication:(id)arg1 reason:(long long *)arg2;	// IMP=0x00600000003d1ea7
+ (void)hd_openApplication:(id)arg1 optionsDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00600000003d1cf5
+ (id)hd_defaultService;	// IMP=0x00600000003d1cdc
- (void)hd_openApplication:(id)arg1 optionsDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003d1e0b
@end

