//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextRange.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WKTextRange : UITextRange
{
    struct CGRect _startRect;	// 8 = 0x8
    struct CGRect _endRect;	// 40 = 0x28
    _Bool _isNone;	// 72 = 0x48
    _Bool _isRange;	// 73 = 0x49
    _Bool _isEditable;	// 74 = 0x4a
    NSArray *_selectionRects;	// 80 = 0x50
    unsigned long long _selectedTextLength;	// 88 = 0x58
}

+ (id)textRangeWithState:(_Bool)arg1 isRange:(_Bool)arg2 isEditable:(_Bool)arg3 startRect:(struct CGRect)arg4 endRect:(struct CGRect)arg5 selectionRects:(id)arg6 selectedTextLength:(unsigned long long)arg7;	// IMP=0x00600000008f92be
@property(copy, nonatomic) NSArray *selectionRects; // @synthesize selectionRects=_selectionRects;
@property(nonatomic) unsigned long long selectedTextLength; // @synthesize selectedTextLength=_selectedTextLength;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) _Bool isRange; // @synthesize isRange=_isRange;
@property(nonatomic) _Bool isNone; // @synthesize isNone=_isNone;
@property(nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property(nonatomic) struct CGRect startRect; // @synthesize startRect=_startRect;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008f95c5
- (_Bool)isEmpty;	// IMP=0x00000000008f95b0
- (id)end;	// IMP=0x00000000008f9553
- (id)start;	// IMP=0x00000000008f94f6
- (id)description;	// IMP=0x00000000008f9411
- (void)dealloc;	// IMP=0x00000000008f93cf
- (_Bool)_isRanged;	// IMP=0x00000000008f92a9
- (_Bool)_isCaret;	// IMP=0x00000000008f9297

@end
