//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol VRXInteractionDelegate;

@interface (null) (SnippetUI)
@property(nonatomic, copy) NSString *viewId;
@property(nonatomic, readonly) _Bool requestsKeyWindow;
@property(nonatomic, readonly) _Bool containsComponentsWithAction;
@property(nonatomic, readonly) NSArray *aceCommands;
@property(nonatomic) long long backgroundMaterial;
@property(nonatomic, retain) id <VRXInteractionDelegate> interactionDelegate;
@property(nonatomic) double snippetWidth;
@property(nonatomic) long long currentIdiom;
- (void)postSiriEvent:(long long)arg1;	// IMP=0x00200000002c0ea0
- (void)setPlayerState:(long long)arg1 aceId:(id)arg2;	// IMP=0x00200000002c0df0
- (void)setAsrText:(id)arg1;	// IMP=0x00200000002c0d70
- (void)updateSharedStateData:(id)arg1;	// IMP=0x00200000002c0bd0
- (void)updateSharedState:(id)arg1;	// IMP=0x00200000002c0750
@property(nonatomic, readonly) NSString *description;
@end

