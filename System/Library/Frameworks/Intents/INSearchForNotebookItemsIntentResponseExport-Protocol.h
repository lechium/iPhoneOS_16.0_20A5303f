//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSArray;

@protocol INSearchForNotebookItemsIntentResponseExport <NSObject, JSExport>
@property(nonatomic) long long sortType;
@property(copy, nonatomic) NSArray *tasks;
@property(copy, nonatomic) NSArray *taskLists;
@property(copy, nonatomic) NSArray *notes;
@property(readonly, nonatomic) long long code;
@end
