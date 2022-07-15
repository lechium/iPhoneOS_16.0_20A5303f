//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAnnotation, AKController, AKPageController, CALayer, NSString, NSTextStorage, NSUndoManager, UITextView, UIView;
@protocol AKTextAnnotationProtocol;

@interface AKTextEditorController : NSObject
{
    _Bool _wantsTextViewBecomeFirstResponder;	// 8 = 0x8
    _Bool _isInEndEditing;	// 9 = 0x9
    _Bool _isInAdjustAnnotationFrameToFitText;	// 10 = 0xa
    UITextView *_textView;	// 16 = 0x10
    AKAnnotation<AKTextAnnotationProtocol> *_annotation;	// 24 = 0x18
    AKController *_controller;	// 32 = 0x20
    AKPageController *_pageController;	// 40 = 0x28
    CALayer *_textViewMaskLayer;	// 48 = 0x30
    UIView *_textViewContainer;	// 56 = 0x38
    NSTextStorage *_textStorage;	// 64 = 0x40
    double _renderingTextStorageScaleFactor;	// 72 = 0x48
    double _modelToEditorScaleFactor;	// 80 = 0x50
    double _handleCompensatingScaleFactor;	// 88 = 0x58
    NSUndoManager *_textViewUndoManager;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000104b27
@property _Bool isInAdjustAnnotationFrameToFitText; // @synthesize isInAdjustAnnotationFrameToFitText=_isInAdjustAnnotationFrameToFitText;
@property _Bool isInEndEditing; // @synthesize isInEndEditing=_isInEndEditing;
@property(retain) NSUndoManager *textViewUndoManager; // @synthesize textViewUndoManager=_textViewUndoManager;
@property double handleCompensatingScaleFactor; // @synthesize handleCompensatingScaleFactor=_handleCompensatingScaleFactor;
@property double modelToEditorScaleFactor; // @synthesize modelToEditorScaleFactor=_modelToEditorScaleFactor;
@property double renderingTextStorageScaleFactor; // @synthesize renderingTextStorageScaleFactor=_renderingTextStorageScaleFactor;
@property(retain) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain) UIView *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property(retain) CALayer *textViewMaskLayer; // @synthesize textViewMaskLayer=_textViewMaskLayer;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property __weak AKAnnotation<AKTextAnnotationProtocol> *annotation; // @synthesize annotation=_annotation;
@property(retain) UITextView *textView; // @synthesize textView=_textView;
- (void)_firstResponderDidChange:(id)arg1;	// IMP=0x0000000000104923
- (void)_unregisterForFirstResponderNotifications;	// IMP=0x00000000001048c3
- (void)_registerForFirstResponderNotifications;	// IMP=0x000000000010485c
- (_Bool)_doHandleBackTab;	// IMP=0x00000000001047a4
- (_Bool)_doHandleTab;	// IMP=0x00000000001046ec
- (void)_updateTextView:(id)arg1 withFrame:(struct CGRect)arg2 andOrientation:(long long)arg3 additionalRotation:(double)arg4;	// IMP=0x0000000000103ba6
- (struct CGRect)_editorFrameForTextBoundsInModel:(struct CGRect)arg1;	// IMP=0x0000000000103a79
- (void)_adjustEditorToFitAnnotation:(id)arg1 withText:(id)arg2;	// IMP=0x0000000000103754
- (void)_adjustAnnotationFrameToFitText;	// IMP=0x00000000001032cf
- (id)_newScaledPaths:(id)arg1 withScaleFactor:(double)arg2 aboutCenter:(struct CGPoint)arg3;	// IMP=0x0000000000102e87
- (void)_performBlockOnMainThread:(CDUnknownBlockType)arg1;	// IMP=0x0000000000102e1e
- (void)handleBackTabCommand;	// IMP=0x0000000000102e0c
- (void)handleTabCommand;	// IMP=0x0000000000102dfa
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0000000000102df4
- (void)textViewDidChange:(id)arg1;	// IMP=0x0000000000102de2
@property(readonly, nonatomic) _Bool isEditing;
- (void)updateForTextAttributeChange;	// IMP=0x0000000000102d18
- (void)_endEditing;	// IMP=0x0000000000102822
- (void)_commitToModelWithoutEndingEditing;	// IMP=0x00000000001025c0
- (void)_beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(_Bool)arg3 withPencil:(_Bool)arg4;	// IMP=0x00000000001015c6
- (void)endEditing;	// IMP=0x0000000000101564
- (void)commitToModelWithoutEndingEditing;	// IMP=0x0000000000101502
- (void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(_Bool)arg3 withPencil:(_Bool)arg4;	// IMP=0x000000000010140b
- (void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(_Bool)arg3;	// IMP=0x00000000001013f6
- (void)dealloc;	// IMP=0x000000000010135c
- (id)initWithController:(id)arg1;	// IMP=0x00000000001012f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
