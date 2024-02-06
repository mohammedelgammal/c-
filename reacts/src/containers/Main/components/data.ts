import { IconType } from "react-icons";
import { BsGlobe, BsNintendoSwitch, BsXbox } from "react-icons/bs";
import { FaApple, FaLinux, FaWindows, FaXbox } from "react-icons/fa";
import { MdPhoneIphone } from "react-icons/md";
import {
  SiNintendo,
  SiNintendo3Ds,
  SiPlaystation3,
  SiPlaystation4,
  SiPlaystation5,
  SiPlaystationvita,
  SiXbox,
} from "react-icons/si";
import { TbPlaystationTriangle, TbXboxB } from "react-icons/tb";

const platforms: string[] = [
  "PC",
  "PlayStation",
  "Xbox",
  "iOS",
  "Android",
  "Apple Macintosh",
  "Linux",
  "Nintendo",
  "Atari",
  "Commodore / Amiga",
  "SEGA",
  "3DO",
  "Neo Geo",
  "Web",
];
const order: string[] = [
  "Relevance",
  "Date added",
  "Name",
  "Release date",
  "Popularity",
  "Average rating",
];

const iconsMap: { [K: string]: IconType } = {
  pc: FaWindows,
  playstation3: SiPlaystation3,
  playstation4: SiPlaystation4,
  playstation5: SiPlaystation5,
  "xbox-one": SiXbox,
  xbox360: BsXbox,
  xbox: FaXbox,
  "xbox-series-x": TbXboxB,
  nintendo: SiNintendo,
  "nintendo0-3ds": SiNintendo3Ds,
  "nintendo-ds": SiNintendo,
  psvita: SiPlaystationvita,
  psp: TbPlaystationTriangle,
  "nintendo-switch": BsNintendoSwitch,
  mac: FaApple,
  linux: FaLinux,
  ios: MdPhoneIphone,
  web: BsGlobe,
};
export { platforms, order, iconsMap };
