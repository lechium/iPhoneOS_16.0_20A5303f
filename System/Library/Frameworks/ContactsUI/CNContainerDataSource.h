//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNContactViewCache, NSArray;

__attribute__((visibility("hidden")))
@interface CNContainerDataSource : NSObject
{
    _Bool _ignoresExchangeContainers;	// 8 = 0x8
    CNContactStore *_store;	// 16 = 0x10
    NSArray *_containerPickerItems;	// 24 = 0x18
    NSArray *_containers;	// 32 = 0x20
    CNContactViewCache *_contactViewCache;	// 40 = 0x28
}

+ (id)os_log;	// IMP=0x00600000001a1025
- (void).cxx_destruct;	// IMP=0x00000000001a0f49
@property(retain, nonatomic) CNContactViewCache *contactViewCache; // @synthesize contactViewCache=_contactViewCache;
@property(retain, nonatomic) NSArray *containers; // @synthesize containers=_containers;
@property(retain, nonatomic) NSArray *containerPickerItems; // @synthesize containerPickerItems=_containerPickerItems;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(nonatomic) _Bool ignoresExchangeContainers; // @synthesize ignoresExchangeContainers=_ignoresExchangeContainers;
- (id)writableContainersForAccount:(id)arg1;	// IMP=0x00000000001a0c16
- (id)allAccounts;	// IMP=0x00000000001a0aa8
- (void)discoverContainers;	// IMP=0x000000000019ffe2
- (id)initWithContactStore:(id)arg1;	// IMP=0x000000000019fee0

@end

