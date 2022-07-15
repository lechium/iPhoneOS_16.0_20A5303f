//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIWebDocumentView;
@protocol WebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPaginationInfo : NSObject
{
    NSObject<WebDocumentView> *_documentView;	// 8 = 0x8
    double _scaleFactor;	// 16 = 0x10
    struct CGSize _layoutSize;	// 24 = 0x18
    NSArray *_pageRects;	// 40 = 0x28
    UIWebDocumentView *_webDocumentView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000014d118d
@property(retain, nonatomic) UIWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
- (id)documentView;	// IMP=0x00000000014d1164
- (id)pageRects;	// IMP=0x00000000014d1156
- (struct CGSize)layoutSize;	// IMP=0x00000000014d1146
- (double)scaleFactor;	// IMP=0x00000000014d113b
- (struct CGSize)sizeForPageAtIndex:(long long)arg1;	// IMP=0x00000000014d108e
@property(readonly, nonatomic) double lastPageHeight;
@property(readonly, nonatomic) unsigned long long pageCount;
- (void)dealloc;	// IMP=0x00000000014d0f90
- (id)initWithDocumentView:(id)arg1 scaleFactor:(double)arg2 layoutSize:(struct CGSize)arg3 pageRects:(id)arg4;	// IMP=0x00000000014d0eca

@end
