abstract class Strategy {
  abstract compress: (image: string) => void;
}

export class JPEGCompressor extends Strategy {
  compress = (image: string): void => {
    console.log(`compressed ${image} in JPEG format`);
  };
}

export class PNGCompressor extends Strategy {
  compress = (image: string): void => {
    console.log(`compressed ${image} in PNG format`);
  };
}

export default class ImageStorer {
  private _images: string[] = [];
  private compressStrategy: Strategy = {} as Strategy;

  public compress = (image: string): void => {
    this.compressStrategy.compress(image);
  };
  public store = (image: string): void => {
    this._images.push(image);
    console.log("stored", image);
  };
  public setCompressStrategy = (strategy: Strategy): void => {
    this.compressStrategy = strategy;
  };
}
