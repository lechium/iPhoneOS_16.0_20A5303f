//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol CSAttSiriNode;

@protocol CSAttSiriAFTMNodeDelegate <NSObject>
- (void)attSiriNode:(id <CSAttSiriNode>)arg1 didMitigate:(_Bool)arg2 withScore:(float)arg3 taskType:(NSString *)arg4;
@end

