//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSURL, SXAddition;
@protocol SXAction;

@protocol SXActionFactory <NSObject>
- (id <SXAction>)actionForURL:(NSURL *)arg1;
- (id <SXAction>)actionForAddition:(SXAddition *)arg1;
@end

