# WEB DEVELOPMENT LAB

## Installing git

## Installing Nodejs

## Installing reactjs

where there is angle brackets `<>` and some text in it replace that with the instructed words

```bash
npm install -g create-react-app
cd <.../directory/>
npx create-react-app <app-name>
cd <./app-name>
npm start
npm start --watch
```

## Installing tailwindcss

```bash
npm install -D tailwindcss
npx tailwindcss init
```

## Installing react-router

```bash
npm install react-router-dom
```

## Routing with DOM

create folder within the `src` folder called `components`
create routes inside `components` eg `home.js`,
create `routes.js` in `<app-name>/src/`

in `routes.js` create a router component and export it

```jsx
import { createBrowserRouter } from "react-router-dom";
import Home from "./components/home";
import Login from "./components/login";
import App from "./App";

const router = createBrowserRouter([
  {
    path: "/",
    element: <App />,
  },
  {
    path: "/home",
    element: <Home />,
  },
  {
    path: "/login",
    element: <Login />,
  },
]);

export default router;
```
