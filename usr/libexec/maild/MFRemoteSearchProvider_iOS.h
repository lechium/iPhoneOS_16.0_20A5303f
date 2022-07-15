//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMailMessageLibraryQueryTransformer, SearchManager;

@interface MFRemoteSearchProvider_iOS : NSObject
{
    MFMailMessageLibraryQueryTransformer *_transformer;	// 8 = 0x8
    SearchManager *_searchManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b5419
@property(readonly, nonatomic) SearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(readonly, nonatomic) MFMailMessageLibraryQueryTransformer *transformer; // @synthesize transformer=_transformer;
- (id)verifyResults:(id)arg1 query:(id)arg2;	// IMP=0x00100000000b52d5
- (id)fetchRemoteMessagesWithQuery:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000000b514f
- (id)initWithMessagePersistence:(id)arg1;	// IMP=0x00100000000b5081

@end
