/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImageView;



@interface SUImagePreferencesCell : SUPreferencesCell 
{
    unsigned int _hideImage : 1;
    UIImageView *_imageView;
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
}


- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (void)setCellOutline:(NSInteger)arg1;
- (void)_getImageToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2;
- (id)_cachedBackgroundImageWithHeight:(float)arg1;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFade:(float)arg2;
- (void)layoutSubviews;
- (id)image;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)setHidesImage:(BOOL)arg1;
- (void)setImage:(id)arg1 forURL:(id)arg2;

@end