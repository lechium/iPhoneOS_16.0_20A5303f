//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIKBAutoFillTestArchive, UIViewController;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestArchiveMaker : NSObject
{
    UIKBAutoFillTestArchive *_testArchive;	// 8 = 0x8
    UIViewController *_viewControllerToSnapshot;	// 16 = 0x10
    long long _currentTableViewTag;	// 24 = 0x18
    long long _currentTextFieldTag;	// 32 = 0x20
}

+ (id)archiveMakerWithViewControllerToSnapshot:(id)arg1;	// IMP=0x0010000000926c63
- (void).cxx_destruct;	// IMP=0x0000000000929628
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;	// IMP=0x0000000000929203
- (id)_makeCopyOfObject:(id)arg1;	// IMP=0x00000000009290cc
- (id)_cloneNavigationItem:(id)arg1;	// IMP=0x0000000000928dae
- (id)_cloneBarButtonItem:(id)arg1;	// IMP=0x0000000000928a9c
- (id)_cloneViewHierarchyFromRootView:(id)arg1;	// IMP=0x000000000092884f
- (id)_cloneTableView:(id)arg1;	// IMP=0x0000000000927ef8
- (id)_cloneGenericView:(id)arg1;	// IMP=0x0000000000927e4a
- (id)_cloneButton:(id)arg1;	// IMP=0x0000000000927bf6
- (id)_cloneTextView:(id)arg1;	// IMP=0x0000000000927905
- (id)_cloneTextField:(id)arg1;	// IMP=0x0000000000927551
- (id)_cloneLabel:(id)arg1;	// IMP=0x00000000009274a3
- (void)_applyPropertiesFromLabel:(id)arg1 toLabel:(id)arg2;	// IMP=0x0000000000927265
- (void)_applyPropertiesFromView:(id)arg1 toView:(id)arg2;	// IMP=0x00000000009270d7
- (id)_cloneView:(id)arg1;	// IMP=0x0000000000926ff5
- (id)makeArchive;	// IMP=0x0000000000926d19
- (id)initWithViewControllerToSnapshot:(id)arg1;	// IMP=0x0000000000926cac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
