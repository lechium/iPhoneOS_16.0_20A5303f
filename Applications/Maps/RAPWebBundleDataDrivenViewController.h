//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface RAPWebBundleDataDrivenViewController
{
    NSString *_title;	// 8 = 0x8
    id _data;	// 16 = 0x10
    CDUnknownBlockType _replyHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000066fb67
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x001000000066fb55
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x001000000066fb43
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x001000000066fb31
- (void)didReceiveMessageFromUserContentController:(id)arg1 message:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000066f950
- (void)setupViews;	// IMP=0x001000000066f7a1
- (void)_submit;	// IMP=0x001000000066f625
- (void)_dismiss;	// IMP=0x001000000066f5bd
- (void)dismissModal;	// IMP=0x001000000066f547
- (void)viewDidLoad;	// IMP=0x001000000066f506
- (id)initWithEntryPoint:(id)arg1 report:(id)arg2 title:(id)arg3 data:(id)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000066f404

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

