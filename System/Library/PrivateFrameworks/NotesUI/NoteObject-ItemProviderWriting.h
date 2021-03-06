//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Notes/NoteObject.h>

@class NSArray, NSString;

@interface NoteObject (ItemProviderWriting)
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0010000000131614
+ (id)newNoteForAirDropDocument:(id)arg1 context:(id)arg2 styler:(id)arg3 attachmentPreviewGenerator:(id)arg4;	// IMP=0x001000000013bc6b
+ (void)importLegacyNoteFromWebArchive:(id)arg1 withContent:(id)arg2 intoLegacyNote:(id)arg3 context:(id)arg4;	// IMP=0x001000000013b94a
+ (id)noteByImportingLegacyNoteFromWebArchive:(id)arg1 withContent:(id)arg2 context:(id)arg3 styler:(id)arg4 attachmentPreviewGenerator:(id)arg5;	// IMP=0x001000000013b286
- (id)fileWrapperForURL:(id)arg1;	// IMP=0x0010000000131e2c
- (unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x0010000000131e13
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000131c4b
- (long long)itemProviderType;	// IMP=0x0010000000131c40
- (id)itemProviderIdentifier;	// IMP=0x0010000000131c2e
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000131799
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;	// IMP=0x0010000000131772
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

