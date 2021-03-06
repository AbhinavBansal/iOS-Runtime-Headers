/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSCH3DLight : NSObject <NSCopying> {
    struct tvec4<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
        union { 
            float w; 
            float a; 
            float q; 
        } ; 
    struct tvec4<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
        union { 
            float w; 
            float a; 
            float q; 
        } ; 
    struct tvec4<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
        union { 
            float w; 
            float a; 
            float q; 
        } ; 
    struct tvec3<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
    } mAmbientColor;
    } mAttenuation;
    int mCoordinateSpace;
    } mDiffuseColor;
    BOOL mEnabled;
    float mIntensity;
    NSString *mName;
    } mSpecularColor;
}

@property struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } ambientColor;
@property struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; } attenuation;
@property int coordinateSpace;
@property struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } diffuseColor;
@property BOOL enabled;
@property float intensity;
@property(retain) NSString * name;
@property struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } specularColor;

+ (id)instanceWithArchive:(const struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct Chart3DVectorArchive {} *x4; struct Chart3DVectorArchive {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; float x8; unsigned int x9; struct Chart3DPointLightArchive {} *x10; struct Chart3DDirectionalLightArchive {} *x11; struct Chart3DSpotLightArchive {} *x12; boolx13; int x14; unsigned int x15[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)light;
+ (id)lightClasses;

- (id).cxx_construct;
- (void)affect:(id)arg1 states:(id)arg2 texturePool:(id)arg3;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })ambientColor;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })attenuation;
- (int)coordinateSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })diffuseColor;
- (BOOL)enabled;
- (id)init;
- (id)initWithArchive:(const struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct Chart3DVectorArchive {} *x4; struct Chart3DVectorArchive {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; float x8; unsigned int x9; struct Chart3DPointLightArchive {} *x10; struct Chart3DDirectionalLightArchive {} *x11; struct Chart3DSpotLightArchive {} *x12; boolx13; int x14; unsigned int x15[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithLightArchive:(const struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct Chart3DVectorArchive {} *x4; struct Chart3DVectorArchive {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; float x8; unsigned int x9; struct Chart3DPointLightArchive {} *x10; struct Chart3DDirectionalLightArchive {} *x11; struct Chart3DSpotLightArchive {} *x12; boolx13; int x14; unsigned int x15[1]; }*)arg1 unarchiver:(id)arg2;
- (float)intensity;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)saveToArchive:(struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct Chart3DVectorArchive {} *x4; struct Chart3DVectorArchive {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; float x8; unsigned int x9; struct Chart3DPointLightArchive {} *x10; struct Chart3DDirectionalLightArchive {} *x11; struct Chart3DSpotLightArchive {} *x12; boolx13; int x14; unsigned int x15[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToLightArchive:(struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct Chart3DVectorArchive {} *x4; struct Chart3DVectorArchive {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; float x8; unsigned int x9; struct Chart3DPointLightArchive {} *x10; struct Chart3DDirectionalLightArchive {} *x11; struct Chart3DSpotLightArchive {} *x12; boolx13; int x14; unsigned int x15[1]; }*)arg1 archiver:(id)arg2;
- (void)setAmbientColor:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (void)setAttenuation:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1;
- (void)setCoordinateSpace:(int)arg1;
- (void)setDiffuseColor:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setIntensity:(float)arg1;
- (void)setName:(id)arg1;
- (void)setSpecularColor:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })specularColor;

@end
