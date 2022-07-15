//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, NSArray, NSDictionary;
@protocol MRUUpNextDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface MRUUpNextDataSource : NSObject
{
    MPCPlayerResponse *_response;	// 8 = 0x8
    id <MRUUpNextDataSourceDelegate> _delegate;	// 16 = 0x10
    NSArray *_responseItemIDs;	// 24 = 0x18
    NSDictionary *_responseItemsByIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b7947
@property(retain, nonatomic) NSDictionary *responseItemsByIdentifier; // @synthesize responseItemsByIdentifier=_responseItemsByIdentifier;
@property(readonly, nonatomic) NSArray *responseItemIDs; // @synthesize responseItemIDs=_responseItemIDs;
@property(nonatomic) __weak id <MRUUpNextDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
- (void)updateContentItems;	// IMP=0x00000000000b7590
- (void)removeResponseItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b74ef
- (_Bool)canMoveResponseItemWithIdentifier:(id)arg1;	// IMP=0x00000000000b744f
- (void)moveReponseItemWithIdentifier:(id)arg1 afterResponseItemWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b7312
- (void)moveReponseItemToNextWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b71d6
- (void)playItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b7045
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000b6fa0
- (id)responseItemForIdentifier:(id)arg1;	// IMP=0x00000000000b6efb
- (id)init;	// IMP=0x00000000000b6df8

@end
