//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5Files31DOCDocumentPickerViewController
{
    MISSING_TYPE *pickerDelegate;	// 8 = 0x8
    MISSING_TYPE *didConfirmOrCancel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000001b9870
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000001b9810
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001b97e0
- (id)initWithConfiguration:(id)arg1 sourceObserver:(id)arg2;	// IMP=0x00100000001b97a0
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x00100000001b9710
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001b9650
@property(nonatomic) struct CGSize preferredContentSize;

@end
