//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFPageViewAnnotationControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageViewAnnotationController : NSObject
{
    PDFPageViewAnnotationControllerPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000054ee
- (void)_propagateNotesForIndexSet:(id)arg1;	// IMP=0x0000000000005270
- (id)_markupAnnotationsForExactIndexSet:(id)arg1;	// IMP=0x0000000000004fa3
- (_Bool)_indexSet:(id)arg1 touchesIndexSet:(id)arg2;	// IMP=0x0000000000004dd9
- (id)_getIndexSetIntersectionBetween:(id)arg1 and:(id)arg2;	// IMP=0x0000000000004d20
- (void)_addPopupForAnnotation:(id)arg1;	// IMP=0x0000000000004c10
- (id)markupAnnotationsForIndexSet:(id)arg1;	// IMP=0x0000000000004858
- (void)addMarkupWithStyle:(unsigned long long)arg1 forIndexSet:(id)arg2;	// IMP=0x00000000000038d6
- (void)_rotateActiveAnnotation;	// IMP=0x0000000000003814
- (void)_didRotatePageNotification:(id)arg1;	// IMP=0x0000000000003802
- (void)removeControlForAnnotation:(id)arg1;	// IMP=0x0000000000003634
- (void)addControlForAnnotation:(id)arg1;	// IMP=0x00000000000033a7
- (id)activeAnnotation;	// IMP=0x000000000000338d
- (void)dealloc;	// IMP=0x0000000000003318
- (id)initWithPDFPageView:(id)arg1;	// IMP=0x0000000000003143

@end
