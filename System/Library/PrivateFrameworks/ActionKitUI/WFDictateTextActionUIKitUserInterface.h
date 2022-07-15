//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

@class NSString, WFDictateTextActionView;

__attribute__((visibility("hidden")))
@interface WFDictateTextActionUIKitUserInterface : WFEmbeddableActionUserInterface
{
    WFDictateTextActionView *_actionView;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b58e
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WFDictateTextActionView *actionView; // @synthesize actionView=_actionView;
- (void)dictateTextActionViewDidTapStopButton:(id)arg1;	// IMP=0x000000000002b533
- (void)finishWithError:(id)arg1;	// IMP=0x000000000002b4a1
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b3fe
- (void)actionDidReceiveTranscription:(id)arg1;	// IMP=0x000000000002b361
- (void)actionDidBeginListening;	// IMP=0x000000000002b35b
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b2be
- (_Bool)prefersModalPresentation;	// IMP=0x000000000002b2b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end
