//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICMentionsController.h>

@interface ICMentionsController (App)
- (id)moveCurrentUserToLast:(id)arg1;	// IMP=0x000000000012bb48
- (void)insertMention:(id)arg1 toTextView:(id)arg2 atRange:(struct _NSRange)arg3 viaAutoComplete:(_Bool)arg4;	// IMP=0x000000000012b615
- (void)insertMentionAttachment:(id)arg1 atRange:(struct _NSRange)arg2 viaAutoComplete:(_Bool)arg3;	// IMP=0x000000000012b4ec
- (void)updateAutoCompletionView:(id)arg1 range:(struct _NSRange)arg2 textView:(id)arg3 mentionString:(id)arg4;	// IMP=0x000000000012b37a
@end

