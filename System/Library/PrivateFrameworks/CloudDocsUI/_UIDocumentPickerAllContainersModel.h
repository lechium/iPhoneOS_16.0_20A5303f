//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIDocumentPickerURLContainerModel.h"

@class BRContainer, NSArray;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerAllContainersModel : _UIDocumentPickerURLContainerModel
{
    NSArray *_scopes;	// 8 = 0x8
    BRContainer *_sourceContainer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003ab7a
- (id)scopes;	// IMP=0x000000000003ab43
- (void)startMonitoringChanges;	// IMP=0x000000000003a73a
- (void)updateScopes;	// IMP=0x000000000003a570
- (id)_createObserver;	// IMP=0x000000000003a505
- (id)displayTitle;	// IMP=0x000000000003a4f8
- (_Bool)shouldShowTopLevelContainers;	// IMP=0x000000000003a4f0
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;	// IMP=0x000000000003a4d5
- (id)initWithFoldersForPickableTypes:(id)arg1 mode:(unsigned long long)arg2 sourceContainer:(id)arg3;	// IMP=0x000000000003a451

@end

