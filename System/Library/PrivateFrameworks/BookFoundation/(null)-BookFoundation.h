//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSURL, _TtC14BookFoundation12MResourceSet;

@interface (null) (BookFoundation)
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) _Bool isOrdered;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) _TtC14BookFoundation12MResourceSet *assetsResourceSet;
- (void)fetchAllAssetsWithCompletionHandler:(void (^)(NSError *))arg1;	// IMP=0x003000000002b2e0
- (void)fetchNextAssetsWithCompletionHandler:(void (^)(NSError *))arg1;	// IMP=0x003000000002ac00
@property(nonatomic, readonly) NSArray *_assets;
@property(nonatomic, readonly) NSArray *assets;
@end
