//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCTagController;
@protocol FREditorialItemEntryManager;

@interface FRTagEditorialItemDownloader : NSObject
{
    FCTagController *_tagController;	// 8 = 0x8
    id <FREditorialItemEntryManager> _editorialItemEntryManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000f63ff
@property(readonly, nonatomic) id <FREditorialItemEntryManager> editorialItemEntryManager; // @synthesize editorialItemEntryManager=_editorialItemEntryManager;
@property(readonly, nonatomic) FCTagController *tagController; // @synthesize tagController=_tagController;
- (void)downloadEditorialItemWithIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f5d1f
- (id)initWithTagController:(id)arg1 editorialItemEntryManager:(id)arg2;	// IMP=0x00100000000f5c38

@end
