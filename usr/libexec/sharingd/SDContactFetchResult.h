//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface SDContactFetchResult : NSObject
{
    NSArray *_events;	// 8 = 0x8
    NSData *_currentHistoryToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000019966e
@property(retain) NSData *currentHistoryToken; // @synthesize currentHistoryToken=_currentHistoryToken;
@property(retain) NSArray *events; // @synthesize events=_events;

@end
