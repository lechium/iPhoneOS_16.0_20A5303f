//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTEditStringRow.h>

@interface PTEditStringRow (PXEditStringRow)
+ (void)_px_configureTextField:(id)arg1 withTextPlaceholder:(id)arg2 saveAction:(id)arg3 forRow:(id)arg4;	// IMP=0x00800000002a2a1a
+ (id)px_rowWithTitle:(id)arg1 valueKeyPath:(id)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 textPlaceholder:(id)arg5 textValidator:(CDUnknownBlockType)arg6 condition:(id)arg7;	// IMP=0x00800000002a2850
- (void)setValue:(id)arg1;	// IMP=0x00100000002a18c6
- (void)_px_updateSaveActionFromTextField;	// IMP=0x00100000002a1893
- (void)_px_setEditStringRowTextFieldAction:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a184e
- (CDUnknownBlockType)_px_editStringRowTextFieldAction;	// IMP=0x00100000002a1810
- (id)_px_validatedTextFromText:(id)arg1;	// IMP=0x00100000002a176c
- (void)_px_setEditStringRowTextValidationAction:(CDUnknownBlockType)arg1;	// IMP=0x00100000002a1727
- (CDUnknownBlockType)_px_editStringRowTextValidationAction;	// IMP=0x00100000002a16e9
@end

