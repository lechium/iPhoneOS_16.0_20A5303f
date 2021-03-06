//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSString;
@protocol CuratedCollectionMediaIntegrationInteractionDelegate;

@interface CuratedCollectionMediaIntegrationPlatterControl : UIControl
{
    id <CuratedCollectionMediaIntegrationInteractionDelegate> _interactionDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000003a4ae3
@property(nonatomic) __weak id <CuratedCollectionMediaIntegrationInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00100000003a4a4c
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00100000003a49e2
- (struct CGPoint)menuAttachmentPointForConfiguration:(id)arg1;	// IMP=0x00100000003a495a
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00100000003a48d7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000003a485b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

