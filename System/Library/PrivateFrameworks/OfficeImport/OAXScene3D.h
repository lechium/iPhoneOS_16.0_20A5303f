//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXScene3D : NSObject
{
}

+ (_Bool)isEmpty:(id)arg1;	// IMP=0x00800000002fbd75
+ (void)writeScene3D:(id)arg1 to:(id)arg2;	// IMP=0x00800000002fbba2
+ (id)readScene3DFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000002fb999
+ (id)readBackdropFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000002fb79b
+ (id)readLightRigFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000002fb566
+ (id)readCameraFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000002fb342
+ (id)lightRigDirectionEnumMap;	// IMP=0x00800000001dff5b
+ (id)lightRigTypeEnumMap;	// IMP=0x00800000001dfeb3
+ (id)cameraTypeEnumMap;	// IMP=0x00800000001dfd89
+ (void)writeLightRig:(id)arg1 to:(id)arg2;	// IMP=0x00800000002fcb18
+ (void)writeCamera:(id)arg1 to:(id)arg2;	// IMP=0x00800000002fc873
+ (void)writeRotation3D:(id)arg1 to:(id)arg2;	// IMP=0x00800000002fc5d0
+ (void)writeBackdrop:(id)arg1 to:(id)arg2;	// IMP=0x00800000002fbe1d

@end
