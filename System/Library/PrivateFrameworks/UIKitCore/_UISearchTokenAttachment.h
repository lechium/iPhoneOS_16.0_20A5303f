//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSTextAttachment.h"

@class UISearchToken, _UISearchTokenAttachmentViewProvider;

__attribute__((visibility("hidden")))
@interface _UISearchTokenAttachment : NSTextAttachment
{
    _UISearchTokenAttachmentViewProvider *_viewProvider;	// 8 = 0x8
    UISearchToken *_token;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000217797
- (void).cxx_destruct;	// IMP=0x0000000000217e7b
@property(readonly, nonatomic) UISearchToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) _UISearchTokenAttachmentViewProvider *_viewProvider; // @synthesize _viewProvider;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;	// IMP=0x0000000000217d62
- (void)placeView:(id)arg1 withFrame:(struct CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;	// IMP=0x0000000000217ba1
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;	// IMP=0x0000000000217ad8
- (id)viewProviderForParentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3;	// IMP=0x0000000000217938
- (_Bool)usesTextAttachmentView;	// IMP=0x0000000000217930
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;	// IMP=0x0000000000217928
- (id)initWithToken:(id)arg1;	// IMP=0x00000000002178a3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000217840
- (id)init;	// IMP=0x00000000002177fc
- (id)initWithData:(id)arg1 ofType:(id)arg2;	// IMP=0x000000000021779f

@end

