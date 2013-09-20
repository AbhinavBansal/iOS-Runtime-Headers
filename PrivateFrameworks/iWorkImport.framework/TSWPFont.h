/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSWPFont : NSObject {
    NSString *_compatibilityName;
    NSString *_displayName;
    NSString *_familyName;
    NSString *_fontName;
    unsigned int _hash;
}

@property(copy) NSString * compatibilityName;
@property(readonly) NSString * displayName;
@property(readonly) NSString * familyName;
@property(copy) NSString * fontName;

+ (id)fontWithName:(id)arg1 compatibilityName:(id)arg2;
+ (id)fontWithName:(id)arg1;
+ (BOOL)isKeyValueProxyLeafType;

- (id)compatibilityName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayName;
- (id)familyName;
- (id)fontName;
- (unsigned int)hash;
- (id)init;
- (id)initWithFontName:(id)arg1 compatibilityName:(id)arg2;
- (id)initWithFontName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setCompatibilityName:(id)arg1;
- (void)setFontName:(id)arg1;

@end