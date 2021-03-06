//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFAddNewContactActionUIKitUserInterface : WFEmbeddableActionUserInterface
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000052f76
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000052eff
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;	// IMP=0x0000000000052e39
- (void)finishWithContactIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0000000000052d80
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000052cdd
- (void)showWithContactParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052b48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end

