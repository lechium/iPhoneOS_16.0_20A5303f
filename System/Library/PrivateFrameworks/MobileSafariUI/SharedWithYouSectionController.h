//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LibrarySectionController.h"

@class CloudTabsLibraryItemController, SharedWithYouLibraryItemController;

__attribute__((visibility("hidden")))
@interface SharedWithYouSectionController : LibrarySectionController
{
    CloudTabsLibraryItemController *_cloudTabsItemController;	// 8 = 0x8
    SharedWithYouLibraryItemController *_friendsItemController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000191f08
- (void)registerItemsWithRegistration:(id)arg1;	// IMP=0x0000000000191edb
- (id)title;	// IMP=0x0000000000191ece
- (id)itemControllers;	// IMP=0x0000000000191e74
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000191dce

@end
