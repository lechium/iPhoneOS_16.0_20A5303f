//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, INHomeUserTask, NSArray;

@protocol INControlHomeIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSArray *contents;
@property(copy, nonatomic) INDateComponentsRange *time;
@property(copy, nonatomic) NSArray *filters;
@property(copy, nonatomic) INHomeUserTask *userTask;
- (id)init;
@end

