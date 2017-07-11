//
//  main.m
//  Toyotaz are cars too
//
//  Created by Mohammad Shahzaib Ather on 2017-07-11.
//  Copyright © 2017 Mohammad Shahzaib Ather. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Header.h"
#import "Header2.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        Car *Nissan = [[Car alloc]init] ;
        [Nissan initWithModel:(@"Rogue")];
        [Nissan drive];
        
        Toyota *New = [[Toyota alloc]init];
        [New initWithModel: @"Tesla"];
        [New drive ];
        
    }
    return 0;
}



