//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface RequestStoreItem : NSObject
{
    NSDate *_date;	// 8 = 0x8
    NSString *_itemIdentifier;	// 16 = 0x10
    NSString *_requestIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000018c66
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;	// IMP=0x0010000000018bb6
- (id)compile;	// IMP=0x0010000000018a9c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000000188b4
- (id)initWithItemIdentifier:(id)arg1 requestIdentifier:(id)arg2 date:(id)arg3;	// IMP=0x00100000000187fd

@end

