#import <Foundation/Foundation.h>

/**
 TTTPlayer 的可选配置类，在初始化 TTTPlayer 对象的时候传入其实例进行 TTTPlayer 的可选项配置
 */
@interface TTTPlayerOptions : NSObject

/**
 使用默认配置生成一个 TTTPlayerOption 对象
 */
+ (nonnull TTTPlayerOptions *)defaultOptions;

@end
