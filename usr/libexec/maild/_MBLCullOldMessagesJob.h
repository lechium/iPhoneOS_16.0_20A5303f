//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _MBLCullOldMessagesJob : NSObject
{
    id _messageBodyLoader;	// 8 = 0x8
    NSMutableArray *_messages;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000544fa
- (id)initForMBLMailbox:(id)arg1;	// IMP=0x0010000000054482
- (void)run;	// IMP=0x0010000000054123
@property(copy, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;

@end
