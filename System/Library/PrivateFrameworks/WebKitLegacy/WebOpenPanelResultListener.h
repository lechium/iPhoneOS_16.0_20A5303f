//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebOpenPanelResultListener : NSObject
{
    struct RefPtr<WebCore::FileChooser, WTF::RawPtrTraits<WebCore::FileChooser>, WTF::DefaultRefDerefTraits<WebCore::FileChooser>> _chooser;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000001132d0
- (void).cxx_destruct;	// IMP=0x0000000000113290
- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;	// IMP=0x0000000000113020
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;	// IMP=0x0000000000112f90
- (void)chooseFilenames:(id)arg1;	// IMP=0x0000000000112d80
- (void)chooseFilename:(id)arg1;	// IMP=0x0000000000112cb0
- (void)cancel;	// IMP=0x0000000000112c70
- (id)initWithChooser:(void *)arg1;	// IMP=0x0000000000112bf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

