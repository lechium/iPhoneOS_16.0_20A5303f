//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GCLightServiceServerInterface
- (void)readLightWithReply:(void (^)(float, float, float))arg1;
- (void)updateLightWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
@end

