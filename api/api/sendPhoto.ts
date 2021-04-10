import { NowRequest, NowResponse } from "@vercel/node";
import axios from "axios";

const url = 'https://YourVercelURL.vercel.app/img/';

const token = "";
const passwd = "";

export default async (req: NowRequest, res: NowResponse) => {
  try {
    const body = req.body;
    const fileName = body.fileName;
    if (body.passwd != passwd) {
      res.status(403).json({ success: false });
      return;
    }
    const data = {
      chat_id: `@${body.chatHandle}`,
      photo: `${url}${fileName}`
    };
    await axios.post(
      `https://api.telegram.org/bot${token}/sendPhoto`,
      data
    )
    res.status(200).json({ success: true });
  } catch (error) {
    console.log(error);
    res.status(400).json({ success: false });
  }
};
